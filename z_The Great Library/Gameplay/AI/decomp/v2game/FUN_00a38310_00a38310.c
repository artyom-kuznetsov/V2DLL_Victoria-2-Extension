// FUN_00a38310 @ 00a38310 body=[[00a38310, 00a3837e] [00a38394, 00a383c3] [00a383d9, 00a383f8] [00a383fc, 00a38433]]


void FUN_00a38310(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48b23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e40750;
  local_8 = 1;
  if ((undefined4 *)in_ECX[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[5])(1);
  }
  puVar1 = DAT_01258a8c;
  if (DAT_01258b44 != 0) {
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar1 = (undefined4 *)(DAT_01258b44 + 4);
    puVar2 = (undefined4 *)*puVar1;
    FUN_00a39b10(*puVar2,puVar2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar1);
  }
  if (DAT_01258b48 != 0) {
    local_8 = CONCAT31(local_8._1_3_,3);
    puVar1 = (undefined4 *)(DAT_01258b48 + 4);
    puVar2 = (undefined4 *)*puVar1;
    FUN_00462440(*puVar2,puVar2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar1);
  }
  if (in_ECX[1] != 0) {
    FUN_00a3aac0(in_ECX[2],local_20);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  local_8 = 0xffffffff;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = &PTR_FUN_00e38ad0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  ExceptionList = local_10;
  return;
}

