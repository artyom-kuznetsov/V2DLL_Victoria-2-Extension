// FUN_009d6830 @ 009d6830 body=[[009d6830, 009d6863]]


/* WARNING: Removing unreachable block (ram,0x009d6846) */

undefined4 FUN_009d6830(void)

{
  int iVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  if (unaff_EDI != 0) {
    iVar1 = FUN_009d6a00();
    *unaff_ESI = iVar1;
    unaff_ESI[1] = iVar1;
    unaff_ESI[2] = iVar1 + unaff_EDI;
    return CONCAT31((int3)((uint)(iVar1 + unaff_EDI) >> 8),1);
  }
  return 0;
}

