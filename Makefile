StringTreino: clean
	@echo "Compilando o programa StringTreino"
	@gcc  StringTreino.c -o StringTreino
	@chmod +x StringTreino
	@./StringTreino
	@echo "===================================================================="
Alocacao202: clean
	@echo "Compilando o programa Alocacao202"
	@gcc  Alocacao202.c -o Alocacao202
	@chmod +x Alocacao202
	@./Alocacao202
	@echo "===================================================================="
Alocacao201: clean
	@echo "Compilando o programa Alocacao201"
	@gcc  Alocacao201.c -o Alocacao201
	@chmod +x Alocacao201
	@./Alocacao201
	@echo "===================================================================="
Alocacao200: clean
	@echo "Compilando o programa Alocacao200"
	@gcc  Alocacao200.c -o Alocacao200
	@chmod +x Alocacao200
	@./Alocacao200
	@echo "===================================================================="
Alocacao199: clean
	@echo "Compilando o programa Alocacao199"
	@gcc  Alocacao199.c -o Alocacao199
	@chmod +x Alocacao199
	@./Alocacao199
	@echo "===================================================================="
Alocacao198: clean
	@echo "Compilando o programa Alocacao198"
	@gcc  Alocacao198.c -o Alocacao198
	@chmod +x Alocacao198
	@./Alocacao198
	@echo "===================================================================="
AlocacaoDeMemoria: clean
	@echo "Compilando o programa AlocacaoDeMemoria"
	@gcc  Alocacao197.c -o AlocacaoDeMemoria
	@chmod +x AlocacaoDeMemoria
	@./AlocacaoDeMemoria
	@echo "===================================================================="
ListaGeneralizada: clean
	@echo "Compilando o programa Lista Generalizada"
	@gcc  --std=c99 -DLOG_USE_COLOR log.h log.c ListaGeneralizada.c ListaGeneralizada.h ListaGeneralizadaTeste.c -o ListaGeneralizada
	
	@chmod +x ListaGeneralizada
	
	@./ListaGeneralizada
	@echo "===================================================================="
Linkedlist: clean
	@echo "Compilando o programa Linkedlist"
	@gcc  --std=c99 -DLOG_USE_COLOR log.h log.c Linkedlist.c Linkedlist.h LinkedlistTest.c -o Linkedlist
	
	@chmod +x Linkedlist
	
	@./Linkedlist
	@echo "===================================================================="
Ponteiro: clean
	@echo "Compilando o programa Ponteiro"
	@gcc testepointer.c -o Ponteiro
	@echo "Tornando o programa Ponteiro executável"
	@chmod +x Ponteiro
	@echo "Executando o progrma Ponteiro"
	@./Ponteiro
	@echo "===================================================================="
ola: clean
	@echo "===================================================================="
	@echo "						PROGRAMA OLA								   "
	@echo "===================================================================="
	@echo "Compilando o programa olamundo"
	@gcc olamundo.c -o ola
	@echo "Tornando o programa olamundo executável"
	@chmod +x ola
	@echo "Executando o progrma olamundo"
	./ola
	@echo "===================================================================="
clean:
	@echo "===================================================================="
	@echo " Removendo os programas compilados							   "
	@echo "===================================================================="
	@rm -f ola
	@echo "===================================================================="
help:
	@echo "===================================================================="
	@echo "								AJUDA								   "
	@echo "===================================================================="
	@echo "help			| ajuda"
	@echo "ola			| executa mensagem de teste"
	@echo "clean		| apaga códigos compilados"