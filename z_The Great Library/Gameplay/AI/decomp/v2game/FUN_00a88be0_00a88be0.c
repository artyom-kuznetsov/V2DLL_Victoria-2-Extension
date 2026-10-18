// FUN_00a88be0 @ 00a88be0 body=[[00a88be0, 00a88c4a]]


void FUN_00a88be0(int param_1)

{
  u_long uVar1;
  uint uVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  if (0x13 < *(uint *)(unaff_EDI + 4)) {
    uVar1 = ntohl(*(u_long *)(unaff_EDI + 0xc));
    *(u_long *)(unaff_ESI + 0x24) = uVar1;
    uVar1 = ntohl(*(u_long *)(unaff_EDI + 0x10));
    *(u_long *)(unaff_ESI + 0x28) = uVar1;
    uVar2 = *(uint *)(unaff_ESI + 0x24);
    if ((uVar2 == 0) && (*(int *)(param_1 + 0x10) == 0)) {
      *(undefined4 *)(unaff_ESI + 0x98) = 0x1000;
    }
    else {
      if (*(uint *)(param_1 + 0x10) <= uVar2) {
        uVar2 = *(uint *)(param_1 + 0x10);
      }
      *(uint *)(unaff_ESI + 0x98) = (uVar2 >> 0x10) << 0xc;
    }
    if ((*(uint *)(unaff_ESI + 0x98) < 0x1000) || (0x1000 < *(uint *)(unaff_ESI + 0x98))) {
      *(undefined4 *)(unaff_ESI + 0x98) = 0x1000;
    }
  }
  return;
}

