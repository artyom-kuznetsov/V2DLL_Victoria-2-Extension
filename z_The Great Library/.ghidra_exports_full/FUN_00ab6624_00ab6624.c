// __setlocale_nolock @ 00ab6624 body=[[00ab6624, 00ab683f]]


/* Library Function - Single Match
    __setlocale_nolock
   
   Library: Visual Studio 2010 Release */

void __setlocale_nolock(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  errno_t eVar5;
  int iVar6;
  int in_ECX;
  int in_EDX;
  int iVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  int local_98;
  int local_90;
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  if (in_ECX != 0) {
    if (param_1 != (char *)0x0) {
      FUN_00ab62ea(param_1);
    }
    goto LAB_00ab6831;
  }
  bVar1 = true;
  local_90 = 0;
  if (param_1 != (char *)0x0) {
    if (((*param_1 == 'L') && (param_1[1] == 'C')) && (param_1[2] == '_')) {
      do {
        pcVar2 = _strpbrk(param_1,"=;");
        if (((pcVar2 == (char *)0x0) || (sVar3 = (int)pcVar2 - (int)param_1, sVar3 == 0)) ||
           (*pcVar2 == ';')) goto LAB_00ab6831;
        local_98 = 1;
        ppuVar8 = &PTR_s_LC_COLLATE_00dd955c;
        do {
          iVar7 = _strncmp(*ppuVar8,param_1,sVar3);
          if ((iVar7 == 0) && (sVar4 = _strlen(*ppuVar8), sVar3 == sVar4)) break;
          local_98 = local_98 + 1;
          ppuVar8 = ppuVar8 + 3;
        } while ((int)ppuVar8 < 0xdd958d);
        pcVar2 = pcVar2 + 1;
        sVar3 = _strcspn(pcVar2,";");
        if ((sVar3 == 0) && (*pcVar2 != ';')) goto LAB_00ab6831;
        if (local_98 < 6) {
          eVar5 = _strncpy_s(local_8c,0x83,pcVar2,sVar3);
          if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          local_8c[sVar3] = '\0';
          iVar7 = FUN_00ab62ea(local_8c);
          if (iVar7 != 0) {
            local_90 = local_90 + 1;
          }
        }
      } while ((pcVar2[sVar3] != '\0') && (param_1 = pcVar2 + sVar3 + 1, *param_1 != '\0'));
    }
    else {
      iVar6 = __expandlocale(param_1,local_8c,0x83,0,0,0);
      if (iVar6 == 0) goto LAB_00ab6831;
      puVar9 = (undefined4 *)(in_EDX + 0x48);
      do {
        if (iVar7 != 0) {
          iVar6 = _strcmp(local_8c,(char *)*puVar9);
          if ((iVar6 == 0) || (iVar6 = FUN_00ab62ea(local_8c), iVar6 != 0)) {
            local_90 = local_90 + 1;
          }
          else {
            bVar1 = false;
          }
        }
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 4;
      } while (iVar7 < 6);
      if (bVar1) goto LAB_00ab682c;
    }
    if (local_90 == 0) goto LAB_00ab6831;
  }
LAB_00ab682c:
  __setlocale_get_all();
LAB_00ab6831:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

