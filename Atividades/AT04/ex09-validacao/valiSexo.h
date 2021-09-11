int valiSexo(char sexo){
  char sexos[8] = "MmfFoO";
  
  
    int i;
    for(i=0; i < 5;i++)
      if (sexo == sexos[i])
            return 0;

  return 1;
}