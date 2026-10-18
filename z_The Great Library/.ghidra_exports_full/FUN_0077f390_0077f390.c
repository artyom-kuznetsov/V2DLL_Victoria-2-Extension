// FUN_0077f390 @ 0077f390 body=[[0077f390, 0077f40f]]


bool FUN_0077f390(undefined1 *param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x70) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(unaff_EDI + 0x70) + 0x18;
  }
  if ((((in_EAX != iVar2) && (in_EAX != *(int *)(unaff_EDI + 0xbc))) &&
      (in_EAX != *(int *)(unaff_EDI + 0xc4))) && (in_EAX != *(int *)(unaff_EDI + 200))) {
    iVar2 = 0;
    piVar3 = (int *)(unaff_EDI + 0x74);
    while (in_EAX != *piVar3) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (5 < iVar2) {
        cVar1 = FUN_0077ccf0();
        if (cVar1 != '\0') {
          *param_1 = 1;
          return true;
        }
        return in_EAX == *(int *)(unaff_EDI + 0x40);
      }
    }
  }
  *param_1 = 0;
  return true;
}

