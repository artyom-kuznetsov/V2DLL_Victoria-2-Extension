// FUN_009e6ac0 @ 009e6ac0 body=[[009e6ac0, 009e6afa] [009e6afe, 009e6b03]]


void FUN_009e6ac0(int param_1)

{
  int *in_ECX;
  
  if (param_1 != 0) {
    (**(code **)(*in_ECX + 0x1c))(*(undefined4 *)(param_1 + 0x10));
    (**(code **)(*in_ECX + 0x1c))(*(undefined4 *)(param_1 + 8));
    (**(code **)(*in_ECX + 0x1c))(*(undefined4 *)(param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return;
}

