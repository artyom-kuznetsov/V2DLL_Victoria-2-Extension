// FUN_009b2910 @ 009b2910 body=[[009b2910, 009b296f] [009b297c, 009b29af] [009b29b5, 009b29d9]]


void FUN_009b2910(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bd2b;
  local_10 = ExceptionList;
  puVar1 = in_ECX + 1;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e395e8;
  *puVar1 = &PTR_FUN_00e39658;
  local_8 = 3;
  FUN_009b1da0();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_009b3740(in_ECX + 0x1c);
  iVar2 = in_ECX[0x18];
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  *puVar1 = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(in_ECX[0xe] + 0x98) == puVar1) {
    *(undefined4 *)(in_ECX[0xe] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)in_ECX[0xb]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[6]);
  }
  in_ECX[10] = 0;
  in_ECX[0xb] = 0xf;
  *(undefined1 *)(in_ECX + 6) = 0;
  *in_ECX = &PTR_FUN_00e38728;
  ExceptionList = local_10;
  return;
}

