.PHONY: clean All

All:
	@echo "----------Building project:[ Ejemplo10 - Debug ]----------"
	@cd "Ejemplo10" && "$(MAKE)" -f  "Ejemplo10.mk"
clean:
	@echo "----------Cleaning project:[ Ejemplo10 - Debug ]----------"
	@cd "Ejemplo10" && "$(MAKE)" -f  "Ejemplo10.mk" clean
