// __errcode @ 00b34738 body=[[00b34738, 00b3476b]]


/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2010 Release */

char __errcode(byte param_1)

{
  char cVar1;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return '\x01';
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * '\x02';
      }
      cVar1 = '\x03';
    }
    else {
      cVar1 = '\x02';
    }
  }
  else {
    cVar1 = '\x05';
  }
  return cVar1;
}

