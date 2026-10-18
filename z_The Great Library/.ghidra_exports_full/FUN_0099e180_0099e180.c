// FUN_0099e180 @ 0099e180 body=[[0099e180, 0099e1d3]]


void FUN_0099e180(void)

{
  int iVar1;
  int in_EAX;
  int *in_ECX;
  int iVar2;
  undefined1 local_8 [4];
  
  iVar1 = in_ECX[1];
  iVar2 = *in_ECX;
  if (iVar2 != iVar1) {
    do {
      if ((*(int *)(iVar2 + 4) == *(int *)(in_EAX + 4)) &&
         (*(int *)(iVar2 + 8) == *(int *)(in_EAX + 8))) break;
      iVar2 = iVar2 + 0xc;
    } while (iVar2 != iVar1);
    if ((iVar2 != iVar1) && (iVar2 + 0xc != iVar1)) {
      FUN_0099e1e0(local_8,iVar2 + 0xc,in_EAX);
      return;
    }
  }
  FUN_0099e960();
  return;
}

