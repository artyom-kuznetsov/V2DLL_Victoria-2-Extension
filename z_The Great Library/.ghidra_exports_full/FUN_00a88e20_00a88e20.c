// FUN_00a88e20 @ 00a88e20 body=[[00a88e20, 00a88f1c]]


void FUN_00a88e20(undefined4 param_1,int param_2)

{
  u_short uVar1;
  ushort uVar2;
  u_long uVar3;
  uint uVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  if (((param_2 != 0) && (0x2b < *(uint *)(unaff_EDI + 4))) && (*(int *)(unaff_ESI + 0x18) == 1)) {
    uVar3 = ntohl(*(u_long *)(unaff_EDI + 0x14));
    if (uVar3 == *(u_long *)(unaff_ESI + 0x20)) {
      uVar3 = ntohl(*(u_long *)(unaff_EDI + 0x20));
      if (uVar3 == *(u_long *)(unaff_ESI + 0x78)) {
        uVar3 = ntohl(*(u_long *)(unaff_EDI + 0x24));
        if (uVar3 == *(u_long *)(unaff_ESI + 0x70)) {
          uVar3 = ntohl(*(u_long *)(unaff_EDI + 0x28));
          if (uVar3 == *(u_long *)(unaff_ESI + 0x74)) {
            uVar1 = ntohs(*(u_short *)(unaff_EDI + 0xc));
            *(u_short *)(unaff_ESI + 4) = uVar1;
            uVar2 = ntohs(*(u_short *)(unaff_EDI + 0xe));
            if (uVar2 < 0x240) {
              uVar2 = 0x240;
            }
            else if (0x1000 < uVar2) {
              uVar2 = 0x1000;
            }
            if (uVar2 < *(ushort *)(unaff_ESI + 0x94)) {
              *(ushort *)(unaff_ESI + 0x94) = uVar2;
            }
            uVar4 = ntohl(*(u_long *)(unaff_EDI + 0x10));
            if ((uVar4 < 0x1000) || (0x1000 < uVar4)) {
              uVar4 = 0x1000;
            }
            if (uVar4 < *(uint *)(unaff_ESI + 0x98)) {
              *(uint *)(unaff_ESI + 0x98) = uVar4;
            }
            uVar3 = ntohl(*(u_long *)(unaff_EDI + 0x18));
            *(u_long *)(unaff_ESI + 0x24) = uVar3;
            uVar3 = ntohl(*(u_long *)(unaff_EDI + 0x1c));
            *(u_long *)(unaff_ESI + 0x28) = uVar3;
            FUN_00a88520(param_1);
            return;
          }
        }
      }
    }
    *(undefined4 *)(unaff_ESI + 0x18) = 7;
  }
  return;
}

