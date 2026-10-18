// FUN_00ad9630 @ 00ad9630 body=[[00ad9630, 00ad9798]]


void FUN_00ad9630(int *param_1,undefined4 *param_2,undefined4 *param_3)

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
    pcVar3 = "Failed to read the actor file header!";
  }
  else {
    if (((((char)unaff_EDI == 'X') && ((char)((uint)unaff_EDI >> 8) == 'A')) &&
        ((char)((uint)unaff_EDI >> 0x10) == 'C')) && ((char)((uint)unaff_EDI >> 0x18) == ' ')) {
      if (((char)unaff_ESI != '\x03') && (cVar4 = (char)(unaff_ESI >> 8), cVar4 != '\0')) {
        FUN_00b15d30("Actor file version is unsupported! Only v3.0 can be read, while the file contains v%d.%d"
                     ,unaff_ESI & 0xff,cVar4);
        __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
        return;
      }
      uVar2 = unaff_ESI >> 0x10 & 0xff;
      if (uVar2 == 0) {
        *param_2 = 0;
      }
      else {
        if (uVar2 != 1) {
          FUN_00b15d30("Unsupported endian type used! (endian type = %d)",uVar2);
          __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
          return;
        }
        *param_2 = 1;
      }
      uVar2 = unaff_ESI >> 0x18;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          FUN_00b15d30("Unsupported multiply order used! (mulOrder = %d)",uVar2);
          __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
          return;
        }
        *param_3 = 1;
        __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
        return;
      }
      *param_3 = 0;
      __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
      return;
    }
    pcVar3 = "The specified file is not a valid EMotion FX actor file!";
  }
  FUN_00b15d30(pcVar3);
  __security_check_cookie(local_c[0] ^ (uint)&stack0xffffffec);
  return;
}

