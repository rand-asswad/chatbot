/**
 * Project ChatBot
 */


#ifndef _GUICLIENT_H
#define _GUICLIENT_H

#include "../Client.h"


class GUIclient: public Client {
public: 
    
    /**
     * @param exit_status
     */
    void Main(int exit_status);
};

#endif //_GUICLIENT_H