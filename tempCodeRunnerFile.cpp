void findRowSum(const double *dPtr,double *result,int N,int M){

		 double sum;
		for(int i=0;i<N;i++){
		   sum=0;
		    for(int j=0;j<M;j++){
				
                sum += *(dPtr+i+j);
		       
		        
            }
			  
			*(result+i) = sum;

			
		    
			
		}

}
