// FUN_00adf9d0 @ 00adf9d0 body=[[00adf9d0, 00adfa2f]]


void FUN_00adf9d0(void)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  void *_Dst;
  int local_4;
  
  local_4 = in_ECX[1];
  if (local_4 != 0) {
    _Dst = *(void **)(in_ECX[4] + 0xc);
    iVar2 = 0;
    iVar1 = *(int *)(in_ECX[4] + 0x10) - (int)_Dst;
    do {
      if (*(int *)(*in_ECX + iVar2 + 0x80) != 0) {
        FID_conflict__memcpy((void *)((int)_Dst + iVar1),(void *)(*in_ECX + iVar2),0x40);
        FID_conflict__memcpy(_Dst,(void *)(iVar2 + 0x40 + *in_ECX),0x40);
      }
      iVar2 = iVar2 + 0x84;
      _Dst = (void *)((int)_Dst + 0x40);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

