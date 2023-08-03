Ponteiro: clean
	@echo "Compilando o programa Ponteiro"
	gcc testepointer.c -o Ponteiro
	@echo "Tornando o programa Ponteiro executável"
	chmod +x Ponteiro
	@echo "Executando o progrma Ponteiro"
	./Ponteiro
	@echo "===================================================================="
ola: clean
	@echo "===================================================================="
	@echo "						PROGRAMA OLA								   "
	@echo "===================================================================="
	@echo "Compilando o programa olamundo"
	gcc olamundo.c -o ola
	@echo "Tornando o programa olamundo executável"
	chmod +x ola
	@echo "Executando o progrma olamundo"
	./ola
	@echo "===================================================================="
clean:
	@echo "===================================================================="
	@echo " Removendo os programas compilados							   "
	@echo "===================================================================="
	@echo "Removendo o programa olamundo"
	rm -f ola
	@echo "===================================================================="
help:
	@echo "===================================================================="
	@echo "								AJUDA								   "
	@echo "===================================================================="
	@echo "help			| ajuda"
	@echo "ola			| executa mensagem de teste"
	@echo "clean		| apaga códigos compilados"