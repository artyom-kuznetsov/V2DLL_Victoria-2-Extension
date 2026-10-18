// FUN_00a11e60 @ 00a11e60 body=[[00a11e60, 00a11f2a] [00a11f2e, 00a11f5f]]


void FUN_00a11e60(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  int *local_8;
  
  if (in_ECX != in_EAX) {
    iVar2 = *in_ECX;
    uVar4 = in_EAX[1] - *in_EAX >> 4;
    if (uVar4 == 0) {
      FUN_0055cff0(in_ECX,&local_8,iVar2,in_ECX[1]);
      return;
    }
    uVar3 = in_ECX[1] - iVar2 >> 4;
    local_8 = in_ECX;
    if (uVar4 <= uVar3) {
      FUN_00a12920(in_EAX[1]);
      FUN_00463b30(in_ECX[1],local_8);
      in_ECX[1] = (in_EAX[1] - *in_EAX & 0xfffffff0U) + *in_ECX;
      return;
    }
    if (uVar4 <= (uint)(in_ECX[2] - iVar2 >> 4)) {
      FUN_00a12920(*in_EAX + uVar3 * 0x10);
      iVar2 = FUN_00464160(in_EAX[1],in_ECX[1],local_8);
      in_ECX[1] = iVar2;
      return;
    }
    if (iVar2 != 0) {
      FUN_00463b30(in_ECX[1]);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    cVar1 = FUN_00419ba0();
    if (cVar1 != '\0') {
      iVar2 = FUN_00464160(in_EAX[1],*in_ECX,local_8);
      in_ECX[1] = iVar2;
    }
  }
  return;
}

