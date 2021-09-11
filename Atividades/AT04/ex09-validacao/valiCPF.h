int valiCPF(char cpf[Max]){
  int numCarateres= 0;

  while (cpf[numCarateres] != '\0'){
      numCarateres++;
  }
  
  //printf("%d carateres\n",numCarateres);
  if(numCarateres != 11 )
    return 1;
  else
    return 0 ;
}