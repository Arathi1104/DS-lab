package OOPLAB;

import OOPLAB.cpu.Processor;

public class CPUDetails {
		public static void main(String[] args) {
			cpu CPU=new cpu();
			cpu.Processor processor=CPU.new Processor();
			cpu.RAM ram=new cpu.RAM();
			System.out.println("Processor Cache="+processor.getCache());
			System.out.println("RAM Clock speed="+ram.getClockSpeed());
			
		}
		}



