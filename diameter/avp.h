//
//  avp.h
//  diameter
//
//  Created by hidayat on 10/14/15.
//  Copyright © 2015 hidayat. All rights reserved.
//

#ifndef avp_h
#define avp_h

class avp{
public:
    int len;
    char* val; //pointer to value
    
    avp(char* v,int len);
    void dump();
};

#endif /* avp_h */
