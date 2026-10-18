// FUN_00ad97a0 @ 00ad97a0 body=[[00ad97a0, 00ad98db]]


void FUN_00ad97a0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  char *pcVar3;
  char cVar4;
  uint local_c [2];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)local_c;
  iVar1 = (**(code **)(*param_1 + 8))(local_c,8);
  if (iVar1 == 0) {
    pcVar3 = "Failed to read the motion file header!";
  }
  else {
    if ((((char)unaff_EDI == 'X') && ((char)((uint)unaff_EDI >> 8) == 'S')) &&
       ((char)((uint)unaff_EDI >> 0x10) == 'M')) {
      cVar4 = (char)((uint)unaff_EDI >> 0x18);
      if (cVar4 == ' ') {
        *param_3 = 0;
LAB_00ad9817:
        if (((char)unaff_ESI != '\x03') && (cVar4 = (char)(unaff_ESI >> 8), cVar4 != '\0')) {
          FUN_00b15d30("Motion file version is unsupported! Only v3.0 can be read, while the file contains v%d.%d"
                       ,unaff_ESI & 0xff,cVar4);
          __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
          return;
        }
        uVar2 = unaff_ESI >> 0x10 & 0xff;
        if (uVar2 == 0) {
          *param_2 = 0;
          __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
          return;
        }
        if (uVar2 != 1) {
          FUN_00b15d30("Unsupported endian type used! (endian type = %d)",uVar2);
          __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
          return;
        }
        *param_2 = 1;
        __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
        return;
      }
      if (cVar4 == 'W') {
        *param_3 = 1;
        goto LAB_00ad9817;
      }
    }
    pcVar3 = "The specified file is not a valid EMotion FX motion file!";
  }
  FUN_00b15d30(pcVar3);
  __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
  return;
}

