int valiNome(char nome[8]){
  int numCarateres= 0;

  while (nome[numCarateres] != '\0'){
      numCarateres++;
  }
  numCarateres--;
  //printf("%d carateres\n",numCarateres);
  if(numCarateres > 20)
    return 1;
  else
    return 0 ;
}
