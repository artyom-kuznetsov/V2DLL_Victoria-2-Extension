// FUN_009e96b0 @ 009e96b0 body=[[009e96b0, 009e970f]]


undefined4 FUN_009e96b0(void)

{
  int iVar1;
  undefined8 local_c;
  
  if ((DAT_00f20c3c == 2) || (DAT_00f20c3c == 1)) {
    iVar1 = (**(code **)(*DAT_00f20c4c + 0x24))(DAT_00f20c4c);
    local_c = 0;
    (**(code **)(*DAT_00f20c40 + 0x38))(DAT_00f20c40,&local_c,1,0,0);
    DAT_00f20c3c = 0;
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}

