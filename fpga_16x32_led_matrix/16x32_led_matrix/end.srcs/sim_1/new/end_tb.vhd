-- Gebruikte Libs:
library ieee;
   use ieee.std_logic_1164.all;
library work;
   use work.all;
 
-- Entity definitie leeg omdat dit een testbench is
entity clk_tb is
-- Port ( );
end clk_tb;

-- Beschrijving van de Architecture
architecture sim of clk_tb is
 -- De signalen van de testbench
   signal led : STD_LOGIC_VECTOR (15 downto 0);
   signal clk : std_logic;
--   signal seg : Std_logic_vector(6 downto 0);
--   signal an : std_logic_vector(3 downto 0);
begin
 -- Aanmaken van een component van btn2led
 -- eerste sw is de sw van de btn2led de tweede is het signaal van de Testbench
Testclk : entity Top
    port map ( led => led,
            clk => clk
            );
 -- Een sequentieel process voor het aanleggen van de stimuli aan btn2led
 TheStimuli: process
 begin
    wait for 1000000000 ns;
    wait for 1000000000 ns;
    wait for 1000000000 ns;
    wait for 1000000000 ns;
    wait for 1000000000 ns;
    wait; -- end simulation
 end process TheStimuli;
end sim;
