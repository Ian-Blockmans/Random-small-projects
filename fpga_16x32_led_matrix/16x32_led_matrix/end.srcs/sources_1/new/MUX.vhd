----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Ian Blockmans
-- 
-- Create Date: 10.05.2019 08:55:08
-- Design Name: 
-- Module Name: MUX - Behavioral
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

entity mux is
    Port (
        in0 : in std_logic_vector(6 downto 0); 
        in1 : in std_logic_vector(6 downto 0); 
        in2 : in std_logic_vector(6 downto 0); 
        in3 : in std_logic_vector(6 downto 0);
        sel : in std_logic_vector(1 downto 0);
        clk_in: in std_logic;
        uit : out std_logic_vector(6 downto 0)
    );
end mux;

architecture Behavioral of mux is
    signal uit_sig : std_logic_vector(6 downto 0);

begin
    uit_sig <= in0 when sel = "00" else
        in1 when sel = "01" else
        in2 when sel = "10" else
        in3 when sel = "11" else
        "0000000";
    process(clk_in)
        begin
        if(rising_edge(clk_in)) then
            uit <= uit_sig;
        end if;
    end process;
end Behavioral;
