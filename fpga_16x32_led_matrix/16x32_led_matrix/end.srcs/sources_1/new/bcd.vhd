----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Ian Blockmans
-- 
-- Create Date: 05/16/2019 11:46:45 PM
-- Design Name: 
-- Module Name: bcd - Behavioral
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

use IEEE.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity bcd is
    Port (
    CLKIN : in std_logic;
    EN : in std_logic;
    CO : out std_logic;
    BCD : out std_logic_vector(6 downto 0)
    );
end bcd;

architecture Behavioral of bcd is
    signal temp : std_logic_vector (3 downto 0);
    signal temp_bcd : std_logic_vector (6 downto 0);
begin
    process(EN)
        begin
        if(rising_edge(EN)) then
        if(temp = "1001")then
            CO <= '1';
            temp <= "0000";
        else
            CO <= '0';
            temp <= temp + 1;
        end if;
        end if;
        
    end process;
    process(CLKIN)
        begin
        if(rising_edge(CLKIN)) then
        case temp is
        when "0000" => BCD <= "1000000";   
        when "0001" => BCD <= "1111001"; 
        when "0010" => BCD <= "0100100"; 
        when "0011" => BCD <= "0110000"; 
        when "0100" => BCD <= "0011001"; 
        when "0101" => BCD <= "0010010"; 
        when "0110" => BCD <= "0000010"; 
        when "0111" => BCD <= "1111000"; 
        when "1000" => BCD <= "0000000";     
        when "1001" => BCD <= "0010000"; 
        when others => BCD <= "1111111";
        end case;
        end if;
    end process;
end Behavioral;

