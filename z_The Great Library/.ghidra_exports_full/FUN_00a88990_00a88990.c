// FUN_00a88990 @ 00a88990 body=[[00a88990, 00a88a3f]]


void FUN_00a88990(void)

{
  uint *puVar1;
  u_long uVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  if (((uint)*(byte *)(unaff_EDI + 1) < *(uint *)(unaff_ESI + 0x20)) &&
     (*(int *)(unaff_ESI + 0x18) == 4)) {
    uVar2 = ntohl(*(u_long *)(unaff_EDI + 0xc));
    uVar4 = uVar2 & 0x7f;
    if (uVar2 < *(uint *)(unaff_ESI + 0xcc) + 0x80) {
      if (uVar2 < *(uint *)(unaff_ESI + 0xcc)) {
        return;
      }
      if ((*(uint *)(unaff_ESI + 0xd4 + (uVar4 >> 5) * 4) & 1 << ((byte)uVar4 & 0x1f)) != 0) {
        return;
      }
    }
    else {
      *(u_long *)(unaff_ESI + 0xcc) = uVar2 - uVar4;
      *(undefined8 *)(unaff_ESI + 0xd4) = 0;
      *(undefined8 *)(unaff_ESI + 0xdc) = 0;
    }
    puVar1 = (uint *)(unaff_ESI + 0xd4 + (uVar4 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
    uVar3 = FUN_00a89eb0(unaff_EDI + 0x10,*(int *)(unaff_EDI + 4) + -0x10,2);
    FUN_00a8a680(uVar3,0);
  }
  return;
}

