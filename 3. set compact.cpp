								//Set
							//===============
							
							
// Declaration
//============
	map <int, int> mp;		// Map with key type 'int' and value type 'int'
	map <string, int> mp;	// Map with key type 'string' and value type 'int'

	
// Assign Data
//============
	mp[key] = val			// Insert value 'val' at the index 'key'


// Delete Data
//=============
	mp.earse(key)			// Removes the index 'key'


// Iterations
//============

	// Loop Iterator (Shortcut Method)
	for(auto item : mp){
		cout << item.first << " ";		// This is the index
		cout << item.second << " ";		// This is the value at index 'key'
		cout << mp[item.first] << " ";	// This is also the value at index 'key'
	}
	

// Important Functions
//====================
	mp.begin();	// Address of the first pair  
	mp.end();	// Address *after the last pair, not the last pair
	mp.size();	// return the size of the map

	
// Find Data
//==========
	auto return_val = mp.find(key) 	// if the index 'key' not found then
									// 'return_val' will be mp.end()
	
	// implementation
	if(mp.find(key) != mp.end()){
		//found
	}
	else{
		//not found
	}
	
	// implementation
	if(mp.find(key) != mp.end()){
		//not found
	}
	else{
		//found
	}
	
	
	
								//Complexity in O()
						//=============================
						
//		Operation			  Map						unordered_map
//================================================================================
//					Best	Average		Worst		Best	Average		Worst	
//================================================================================
//		Insert		log(n)	log(n)		log(n)		O(1)	O(1)		O(n)
//		Erase		log(n)	log(n)		log(n)		O(1)	O(1)		O(n)
//		Find		log(n)	log(n)		log(n)		O(1)	O(1)		O(n)
//		
//


