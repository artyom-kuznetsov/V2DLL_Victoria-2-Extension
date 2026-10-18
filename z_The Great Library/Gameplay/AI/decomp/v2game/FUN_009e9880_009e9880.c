// FUN_009e9880 @ 009e9880 body=[[009e9880, 009e9909]]


undefined4 FUN_009e9880(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((DAT_00f20c3c != 2) && (DAT_00f20c3c != 0)) {
    iVar1 = (**(code **)(*DAT_00f20c50 + 0x20))(DAT_00f20c50,&local_8,&local_10,&local_c,0);
    while (-1 < iVar1) {
      (**(code **)(*DAT_00f20c50 + 0x30))(DAT_00f20c50,local_8,local_10,local_c);
      if (local_8 == 1) {
        (**(code **)(*DAT_00f20c4c + 0x24))(DAT_00f20c4c);
        return 1;
      }
      iVar1 = (**(code **)(*DAT_00f20c50 + 0x20))(DAT_00f20c50,&local_8,&local_10,&local_c,0);
    }
  }
  return 0;
}

