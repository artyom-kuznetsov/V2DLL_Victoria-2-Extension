// FUN_0090d960 @ 0090d960 body=[[0090d960, 0090d9c5]]


uint FUN_0090d960(undefined4 *param_1)

{
  uint in_EAX;
  uint uVar1;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_2c;
  
  if (unaff_ESI != (int *)0x0) {
    FUN_008a8650(0);
    FUN_008a8650(0);
    local_90 = *param_1;
    local_8c = param_1[1];
    local_48 = *unaff_EDI;
    local_44 = unaff_EDI[1];
    local_2c = local_98;
    uVar1 = (**(code **)(*unaff_ESI + 0x20))(local_50);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

