default:    
	@if [ "${CROSS_COMPILE}" = "aarch64-none-linux-gnu" ]; then\
        	aarch64-none-linux-gnu-gcc writer.c;\
	else \
		gcc writer.c;\
    	fi 
	
clean:
	rm -rf *.out


