// FUN_00436de0 @ 00436de0 body=[[00436de0, 00436e30] [00436e34, 00436e4e]]


undefined4 FUN_00436de0(undefined4 param_1)

{
  char *pcVar1;
  undefined4 unaff_EDI;
  undefined4 local_24;
  uint local_10;
  
  pcVar1 = (char *)FUN_00988f20(unaff_EDI);
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar1 = *(char **)pcVar1;
  }
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    PHYSFS_exists(pcVar1);
  }
  if (local_10 < 0x10) {
    FUN_00988f20(unaff_EDI);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_24);
}

