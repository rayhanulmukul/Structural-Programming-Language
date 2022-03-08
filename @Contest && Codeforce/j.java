public String checkGameWinner(char [][]grid){
	// String result = "None";
	// Student code goes here...
	
	for(int i = 0; i < 3; i++){
		int Xcount = 0,Ocount = 0;
		for(int j = 0; j < 3; j++){
		if(grid[i][j]  == 'x'){
		 Xcount = Xcount + 1;
		}
		else if(grid[i][j] == 'o'){
		Ocount = Ocount + 1;
		}

		}
	}
	if(Xcount == 3){
		return "X Wins";
	}
	else if(Ocount == 3){
		return "O Wins";
	}
	for(int i = 0; i < 3; i++){
		int Xcount = 0,Ocount = 0;
		for(int j = 0; j < 3; j++){
		if(grid[j][i]  == 'x'){
		 Xcount = Xcount + 1;
		}
		else if(grid[j][i] == 'o'){
		Ocount = Ocount + 1;
		}

		}
	}
	if(Xcount == 3){
		return "X Wins";
	}
	else if(Ocount == 3){
		return "O Wins";
	}
	int Xcount = 0,Ocount = 0;
	for(int i = 0; i < 3; i++){
		if(grid[i][i] == 'x'){
			Xcount = Xcount + 1;
		}
		else if(grid[i][i] == 'o'){
			Ocount = Ocount + 1;
		}
		if(Xcount == 3){
		return "X Wins";
	}
	else if(Ocount == 3){
		return "O Wins";
	}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(grid[i][j] == '-'){
				return "None";
			}
		}
	}
	return "Tie";

}