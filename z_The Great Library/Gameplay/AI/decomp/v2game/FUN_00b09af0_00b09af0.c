// FUN_00b09af0 @ 00b09af0 body=[[00b09af0, 00b09b58]]


void FUN_00b09af0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar2 = in_ECX[1];
  while (iVar2 != 0) {
    cVar1 = (**(code **)(*(int *)in_ECX[4] + 0x24))(*(undefined4 *)*in_ECX);
    if ((cVar1 == '\0') && (iVar2 = *(int *)*in_ECX, iVar2 != 0)) {
      FUN_00b08610();
      (*(code *)PTR__free_00f01b10)(iVar2);
    }
    if ((1 < (uint)in_ECX[1]) && (iVar2 = in_ECX[1] - 1, iVar2 != 0)) {
      FID_conflict__memcpy((void *)*in_ECX,(void *)((int)*in_ECX + 0x50),iVar2 * 0x50);
    }
    in_ECX[1] = in_ECX[1] + -1;
    iVar2 = in_ECX[1];
  }
  return;
}

