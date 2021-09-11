int valiData(int vetor[8]){
  if(vetor[0] > 31 ||vetor[0] < 1)
    return 1;
  
  if(vetor[1] > 12 ||vetor[1] < 1)
    return 1;

  if(vetor[2] >2007  ||vetor[2] < 1921)
    return 1;


  return 0;
}