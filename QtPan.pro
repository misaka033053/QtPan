TEMPLATE = subdirs

SUBDIRS =   TCPServer\
            TCPClient\
            QtPanCommon

TCPClient.depends = QtPanCommon
TCPServer.depends = QtPanCommon