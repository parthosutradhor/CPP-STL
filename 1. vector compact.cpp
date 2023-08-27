								//Vector
							//===============
							
							
// Declaration (1D)
//=================
	vector <int> v;			// Vector of Size Zero of 'int' type
	vector <int> v(n,x);	// Vector of Size 'n' initialized with all 'x'

	
// Declaration (2D)
//=================
	vector <vector<int>> v;				// 2D Vector of Size Zero
	vector <int> v(m,vector<int>(n,x));	// 2D Vector of Size 'm x n'
										// initialized with all 'x'
	
	
// Input Data
//============
	v.push_back(x);				// Insert item 'x' at the end


// Delete Data
//=============
	v.pop_back();				// Deletes the last item
	v.clear();					// Clears the whole Vector


// Iterations
//============

	// Loop Iterator (Shortcut Method)
	for(auto item : v){
		cout << item << " ";
	}
	

// Important Functions
//====================
	v.begin();	// Address of the first element  
	v.end();	// Address *after the last element, not the last element
	v.size();	// return the size of the vector
	
	sort(v.begin(), v.end());		//sorts the vector in ascending order
	reverse(v.begin(), v.end());	//reverse the vector
	
	
// Find Data
//==========
	auto return_val = find(v.begin(), v.end(), x) 	// if x not found then
												// 'return_val' will be v.end()
	
	// implementation
	if(find(v.begin(), v.end(), x) != v.end()){
		//found
	}
	else{
		//not found
	}
	
	// implementation
	if(find(v.begin(), v.end(), x) == v.end()){
		//not found
	}
	else{
		//found
	}
	
	
	


								//Complexity in O()
						//=============================
						
//		Operation			  Vector						List
//================================================================================
//					Best	Average		Worst		Best	Average		Worst	
//================================================================================
//		Push_back	O(1)	O(1)		O(1)	
//		Pop_back	O(1)	O(1)		O(1)		
//		Find		O(1)	O(n)		O(n)		
//		
//
	
