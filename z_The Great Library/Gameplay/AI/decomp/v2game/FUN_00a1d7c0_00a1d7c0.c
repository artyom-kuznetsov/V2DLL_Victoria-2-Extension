// FUN_00a1d7c0 @ 00a1d7c0 body=[[00a1d7c0, 00a1d84d]]


char * FUN_00a1d7c0(int param_1)

{
  char *in_EAX;
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  local_c = in_EAX;
  if (in_EAX == (char *)0x0) {
    local_c = &DAT_00fc0c64;
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    pcVar3 = "finalized the digest!";
    uVar1 = FUN_00418e30(&DAT_00f1fb68,"MD5::hex_digest:  Can\'t get digest if you haven\'t ");
    uVar1 = FUN_00418e30(uVar1,pcVar3);
    FUN_00401280(uVar1);
    return "";
  }
  iVar2 = 0;
  pcVar3 = local_c;
  do {
    _sprintf(pcVar3,"%02x",(uint)*(byte *)(param_1 + 0x58 + iVar2));
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + 2;
  } while (iVar2 < 0x10);
  local_c[0x20] = '\0';
  return local_c;
}

