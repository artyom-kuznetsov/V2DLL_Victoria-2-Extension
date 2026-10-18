// FUN_009dd3f0 @ 009dd3f0 body=[[009dd3f0, 009dd466] [009dd46a, 009dd4cb]]


void FUN_009dd3f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[0x7d] = param_1;
  FUN_00408ed0(param_2,0,0xffffffff);
  uVar1 = FUN_00a8bc80(param_3);
  local_8 = 0;
  FUN_00408ed0(uVar1,0,0xffffffff);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  (**(code **)(*in_ECX + 0xf0))
            (param_1,param_2,in_ECX + 0x76,in_ECX + 0x61,(short)in_ECX[0x6b],
             *(undefined2 *)((int)in_ECX + 0x1ae),in_ECX[0x6c],in_ECX[0x6d],param_4,1);
  ExceptionList = local_10;
  return;
}

