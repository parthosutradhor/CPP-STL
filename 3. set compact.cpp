									//Set
							//===============
							
							
// Declaration
//============
	set <int> st;			// Set with type 'int'
	set <string> st;		// Set with type 'string'
	unordered_set <int> st;	// Unordered Set with type 'int'

	
// Assign Data
//============
	st.insert(x)		// Insert the element 'x'


// Delete Data
//=============
	st.earse(x)			// Removes the element 'x'


// Iterations
//============

	// Loop Iterator (Shortcut Method)
	for(auto item : st){
		cout << item << " ";		// This is the element
	}
	

// Important Functions
//====================
	st.begin();	// Address of the first element  
	st.end();	// Address *after the last element, not the last element
	st.size();	// return the size of the set

	
// Find Data
//==========
	auto return_val = st.find(x) 	// if the element 'x' not found then
									// 'return_val' will be st.end()
	
	// implementation
	if(st.find(x) != st.end()){
		//found
	}
	else{
		//not found
	}
	
	// implementation
	if(st.find(x) != st.end()){
		//not found
	}
	else{
		//found
	}
	
	
	
								//Complexity in O()
						//=============================
						
//		Operation			  Set						unordered_set
//================================================================================
//					Best	Average		Worst		Best	Average		Worst	
//================================================================================
//		Insert		log(n)	log(n)		log(n)		O(1)	O(1)		O(n)
//		Erase		log(n)	log(n)		log(n)		O(1)	O(1)		O(n)
//		Find		log(n)	log(n)		log(n)		O(1)	O(1)		O(n)
//		
//


