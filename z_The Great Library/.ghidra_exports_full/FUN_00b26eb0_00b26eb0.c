// FUN_00b26eb0 @ 00b26eb0 body=[[00b26eb0, 00b26f73]]


void FUN_00b26eb0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  char *pcVar3;
  char *pcVar4;
  
  _Dst = (char *)FUN_00ab4790(param_1,0x2f);
  pcVar3 = param_1;
  do {
    if (_Dst == (char *)0x0) {
      return;
    }
    pcVar4 = _Dst;
    if (_Dst[1] == '.') {
      cVar1 = _Dst[2];
      pcVar4 = pcVar3;
      if (cVar1 == '/') {
        pcVar3 = _Dst + 2;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FID_conflict__memcpy(_Dst,_Dst + 2,(size_t)(pcVar3 + (1 - (int)(_Dst + 3))));
      }
      else if (cVar1 == '\0') {
        *_Dst = '\0';
      }
      else if (cVar1 == '.') {
        if (_Dst[3] == '/') {
          pcVar4 = _Dst + 4;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FID_conflict__memcpy(pcVar3,_Dst + 4,(size_t)(pcVar4 + (1 - (int)(_Dst + 5))));
          pcVar2 = pcVar3;
          do {
            pcVar4 = pcVar2;
            _Dst = pcVar3;
            if (pcVar4 == param_1) break;
            pcVar2 = pcVar4 + -1;
          } while (pcVar4[-1] != '/');
        }
        if (_Dst[3] == '\0') {
          *pcVar4 = '\0';
        }
      }
    }
    _Dst = (char *)FUN_00ab4790(_Dst,0x2f);
    pcVar3 = pcVar4;
  } while( true );
}

