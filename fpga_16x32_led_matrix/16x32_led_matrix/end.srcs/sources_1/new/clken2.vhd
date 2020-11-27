----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Ian Blockmans
-- 
-- Create Date: 05/16/2019 09:04:31 PM
-- Design Name: 
-- Module Name: clken2 - Behavioral
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

entity clken2 is
    Port (
    CLKIN : in std_logic;
    CLKOUT : out std_logic
    );
end clken2;

architecture Behavioral of clken2 is
    signal a : integer := 0;
begin
    process(CLKIN)
        begin
        if(rising_edge(CLKIN)) then
            a <= a+1;
            if(a = 200000) then
                a <= 0;
             end if;
        end if;
     end process;
     CLKOUT <= '1' when a = 200000 else '0';
end Behavioral;
