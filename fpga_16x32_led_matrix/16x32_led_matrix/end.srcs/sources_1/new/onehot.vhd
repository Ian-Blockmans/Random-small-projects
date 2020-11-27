----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/16/2019 11:45:55 PM
-- Design Name: 
-- Module Name: onehot - Behavioral
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

entity onehot is
    Port (CLKIN : in std_logic;
        update : in std_logic;
        sel : out std_logic_vector(1 downto 0);
        AN : out std_logic_vector(3 downto 0));
end onehot;

architecture Behavioral of onehot is
     signal uit : integer  := 0;
     signal ans : std_logic_vector (3 downto 0);
     signal sele : std_logic_vector (1 downto 0);

begin
    process(update)
        begin
        if(rising_edge(update)) then
            if(uit = 5) then
                uit <= 0;
            else
                uit <= uit + 1;
            end if;
        end if;
    end process;
    process(CLKIN)
        begin
            if(rising_edge(CLKIN)) then
                case uit is
                when 0 => ans <= "1110";
                when 1 => ans <= "1101";
                when 2 => ans <= "1011";
                when 3 => ans <= "0111";
                when others => ans <= "1111";
                end case;
                case uit is
                when 0 => sele <= "00";
                when 1 => sele <= "01";
                when 2 => sele <= "10";
                when 3 => sele <= "11";
                when others => sele <= "11";
                end case;
            end if;
     end process;
     sel <= sele;
     AN <= ans;
end Behavioral;
