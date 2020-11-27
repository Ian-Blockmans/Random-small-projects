----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Ian Blockmans
-- 
-- Create Date: 05/16/2019 11:46:45 PM
-- Design Name: 
-- Module Name: Top - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Top is
    port(
        clk : in std_logic;
--        led : out std_logic_vector(15 downto 0);
        seg : out Std_logic_vector(6 downto 0);
        an : out std_logic_vector(3 downto 0) := "1110"
        );
end Top;

architecture Behavioral of Top is
    component clock1hz
    port(CLKIN : in std_logic;
        CLKOUT : out std_logic);
    end component;
    
    component clken2
    port(CLKIN : in std_logic;
        CLKOUT : out std_logic);
    end component;
    
    component mux
    port(in0 : in std_logic_vector(6 downto 0);
        in1 : in std_logic_vector(6 downto 0);
        in2 : in std_logic_vector(6 downto 0);
        in3 : in std_logic_vector(6 downto 0);
        sel : in std_logic_vector(1 downto 0);
        clk_in : in std_logic;
        uit : out std_logic_vector(6 downto 0)); 
    end component;
    
    component bcd
    port(CLKIN : in std_logic;
        EN : in std_logic;
        CO : out std_logic;
        BCD : out std_logic_vector(6 downto 0)); 
    end component;
    
    component onehot
    port(CLKIN : in std_logic;
        update : in std_logic;
        sel : out std_logic_vector(1 downto 0);
        AN : out std_logic_vector(3 downto 0));
    end component;
    
    signal bcd0 : std_logic_vector(6 downto 0);
    signal bcd1 : std_logic_vector(6 downto 0);
    signal bcd2 : std_logic_vector(6 downto 0);
    signal bcd3 : std_logic_vector(6 downto 0);
    signal sel : std_logic_vector(1 downto 0);
    signal HZ2 : std_logic;
    signal SEC : std_logic;
    signal CO1 : std_logic;
    signal CO2 : std_logic;
    signal CO3 : std_logic;
    
begin
   EN1HZ    : clock1hz port map (CLKIN => clk, CLKOUT => SEC);
   EN2HZ    : clken2 port map (CLKIN => clk, CLKOUT => HZ2);
   ONE      : onehot port map(CLKIN => clk, update => HZ2, sel => sel, AN => an);
   MUXC     : mux port map (clk_in => clk, uit => seg, in0 => bcd0, in1 => bcd1, in2 => bcd2, in3 => bcd3,sel => sel);
   BCDC1    : bcd port map(CLKIN => clk, EN => SEC, CO => CO1,BCD => bcd0);
   BCDC2    : bcd port map(CLKIN => clk, EN => CO1, CO => CO2,BCD => bcd1);
   BCDC3    : bcd port map(CLKIN => clk, EN => CO2, CO => CO3,BCD => bcd2);
   BCDC4    : bcd port map(CLKIN => clk, EN => CO3,BCD => bcd3);
   
end Behavioral;