default:    
	@if [ "${CROSS_COMPILE}" = "aarch64-none-linux-gnu" ]; then\
        	aarch64-none-linux-gnu-gcc writer.c -o writer;\
	else \
		gcc writer.c -o writer;\
    	fi 
	
clean:
	rm -rf *.out


