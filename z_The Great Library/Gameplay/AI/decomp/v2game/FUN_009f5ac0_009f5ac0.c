// FUN_009f5ac0 @ 009f5ac0 body=[[009f5ac0, 009f5b3d]]


int * FUN_009f5ac0(void)

{
  int *in_ECX;
  undefined1 local_30 [12];
  undefined4 uStack_24;
  int *local_20;
  undefined1 **local_1c;
  int iStack_18;
  int *piStack_14;
  undefined1 *local_8;
  
  if (((char)in_ECX[0x2d] != '\0') || (*(char *)((int)in_ECX + 0xb5) != '\0')) {
    piStack_14 = (int *)in_ECX[0x2a];
    iStack_18 = in_ECX[0x29];
    local_1c = &local_8;
    uStack_24 = 0x9f5af8;
    local_20 = in_ECX + 0x29;
    FUN_009b6860();
    local_8 = local_30;
    local_1c = (undefined1 **)0xf;
    local_20 = (int *)0x0;
    local_30[0] = 0;
    piStack_14 = in_ECX + 0x29;
    FUN_00408ed0(in_ECX + 6,0,0xffffffff);
    (**(code **)(*in_ECX + 0xcc))();
    *(undefined1 *)((int)in_ECX + 0xb5) = 0;
  }
  return in_ECX + 0x29;
}

