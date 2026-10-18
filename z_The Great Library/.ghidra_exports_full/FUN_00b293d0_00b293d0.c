// FUN_00b293d0 @ 00b293d0 body=[[00b293d0, 00b2944e]]


void FUN_00b293d0(code *param_1,undefined4 param_2)

{
  UINT UVar1;
  BOOL BVar2;
  DWORD local_10;
  char local_c [7];
  char local_5;
  
  builtin_strncpy(local_c,"x:\\",4);
  local_5 = 'A';
  do {
    local_c[0] = local_5;
    UVar1 = GetDriveTypeA(local_c);
    if (UVar1 == 5) {
      UVar1 = SetErrorMode(1);
      BVar2 = GetVolumeInformationA
                        (local_c,(LPSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,&local_10,(LPSTR)0x0,0);
      SetErrorMode(UVar1);
      if (BVar2 != 0) {
        (*param_1)(param_2,local_c);
      }
    }
    local_5 = local_5 + '\x01';
  } while (local_5 < '[');
  return;
}

