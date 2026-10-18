// FUN_00ad98e0 @ 00ad98e0 body=[[00ad98e0, 00ad99fe]]


void FUN_00ad98e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint unaff_ESI;
  char *pcVar3;
  undefined4 uStack_14;
  char cVar4;
  uint local_c [2];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)local_c;
  uStack_14 = 8;
  iVar1 = (**(code **)(*param_1 + 8))(local_c);
  if (iVar1 == 0) {
    pcVar3 = "Failed to read the motion file header!";
  }
  else {
    if (((((char)uStack_14 == 'X') && (uStack_14._1_1_ == 'P')) && (uStack_14._2_1_ == 'M')) &&
       (uStack_14._3_1_ == ' ')) {
      if (((char)unaff_ESI != '\x03') && (cVar4 = (char)(unaff_ESI >> 8), cVar4 != '\0')) {
        FUN_00b15d30("Motion file version is unsupported! Only v3.0 can be read, while the file contains v%d.%d"
                     ,unaff_ESI & 0xff,cVar4);
        __security_check_cookie(local_c[0] ^ (uint)&uStack_14);
        return;
      }
      uVar2 = unaff_ESI >> 0x10 & 0xff;
      if (uVar2 == 0) {
        *param_2 = 0;
        __security_check_cookie(local_c[0] ^ (uint)&uStack_14);
        return;
      }
      if (uVar2 != 1) {
        FUN_00b15d30("Unsupported endian type used! (endian type = %d)",uVar2);
        __security_check_cookie(local_c[0] ^ (uint)&uStack_14);
        return;
      }
      *param_2 = 1;
      __security_check_cookie(local_c[0] ^ (uint)&uStack_14);
      return;
    }
    pcVar3 = "The specified file is not a valid EMotion FX motion file!";
  }
  FUN_00b15d30(pcVar3);
  __security_check_cookie(local_c[0] ^ (uint)&uStack_14);
  return;
}

