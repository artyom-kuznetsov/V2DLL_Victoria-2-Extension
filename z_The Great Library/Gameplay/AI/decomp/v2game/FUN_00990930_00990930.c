// FUN_00990930 @ 00990930 body=[[00990930, 00990c32]]


int FUN_00990930(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  _locale_t unaff_ESI;
  int *piVar7;
  int local_8;
  
  if ((char)in_ECX[0x44] == '\x01') {
    *(undefined1 *)(in_ECX + 0x44) = 0;
    return in_ECX[2];
  }
  piVar6 = (int *)in_ECX[1];
  cVar2 = (**(code **)(*piVar6 + 4))();
  cVar3 = (**(code **)(*piVar6 + 0x24))();
  while ((cVar3 != '\0' && (iVar4 = FID_conflict___iswspace_l((short)cVar2,unaff_ESI), iVar4 != 0)))
  {
    cVar2 = (**(code **)(*piVar6 + 4))();
    cVar3 = (**(code **)(*piVar6 + 0x24))();
  }
  cVar3 = (**(code **)(*piVar6 + 0x24))();
  if (cVar3 == '\0') {
    if (cVar2 == -1) {
      return 0;
    }
    if (cVar2 == 0xffff) {
      return 0;
    }
  }
  piVar7 = in_ECX + 4;
  *(char *)piVar7 = cVar2;
  local_8 = 1;
  *(undefined1 *)((int)in_ECX + 0x11) = 0;
  switch(cVar2) {
  case '!':
  case '#':
  case ';':
    iVar4 = 9;
    break;
  case '\"':
    iVar4 = 2;
    break;
  default:
    iVar4 = 0;
    break;
  case '(':
    iVar4 = 5;
    break;
  case ')':
    iVar4 = 6;
    break;
  case ',':
    iVar4 = 8;
    break;
  case '=':
    iVar4 = 1;
    break;
  case '{':
    iVar4 = 3;
    break;
  case '}':
    iVar4 = 4;
  }
  in_ECX[3] = iVar4;
  if (iVar4 == 9) {
    cVar2 = (**(code **)(*piVar6 + 4))();
    cVar3 = (**(code **)(*piVar6 + 0x24))();
    while ((cVar3 != '\0' && (cVar2 != '\n'))) {
      cVar2 = (**(code **)(*piVar6 + 4))();
      cVar3 = (**(code **)(*piVar6 + 0x24))();
    }
    iVar4 = (**(code **)(*in_ECX + 4))();
    return iVar4;
  }
  if (iVar4 == 2) {
    local_8 = 0;
    cVar2 = (**(code **)(*piVar6 + 4))();
    cVar3 = (**(code **)(*piVar6 + 0x24))();
    while ((cVar3 != '\0' && (cVar2 != '\"'))) {
      *(char *)((int)piVar7 + local_8) = cVar2;
      local_8 = local_8 + 1;
      cVar2 = (**(code **)(*piVar6 + 4))();
      cVar3 = (**(code **)(*piVar6 + 0x24))();
    }
    *(undefined1 *)(local_8 + 0x10 + (int)in_ECX) = 0;
    in_ECX[3] = 0xf;
    return 1;
  }
  if (iVar4 != 0) {
    return 1;
  }
  cVar2 = (**(code **)(*piVar6 + 4))();
  cVar3 = (**(code **)(*piVar6 + 0x24))();
  iVar4 = local_8;
  while ((cVar3 != '\0' && (iVar5 = FID_conflict___iswspace_l((short)cVar2,unaff_ESI), iVar5 == 0)))
  {
    switch(cVar2) {
    case '!':
    case '\"':
    case '#':
    case '(':
    case ')':
    case ',':
    case ';':
    case '=':
    case '{':
    case '}':
      goto switchD_00990b1f_caseD_21;
    default:
      *(char *)((int)piVar7 + iVar4) = cVar2;
      local_8 = iVar4 + 1;
      cVar2 = (**(code **)(*piVar6 + 4))();
      cVar3 = (**(code **)(*piVar6 + 0x24))();
      if ((cVar3 == '\0') && (iVar5 = FID_conflict___iswspace_l((short)cVar2,unaff_ESI), iVar5 == 0)
         ) {
        switch(cVar2) {
        case '!':
        case '\"':
        case '#':
        case '(':
        case ')':
        case ',':
        case ';':
        case '=':
        case '{':
        case '}':
          break;
        default:
          *(char *)((int)piVar7 + local_8) = cVar2;
          local_8 = iVar4 + 2;
        }
      }
      cVar3 = (**(code **)(*piVar6 + 0x24))();
      iVar4 = local_8;
    }
  }
switchD_00990b1f_caseD_21:
  switch(cVar2) {
  case '!':
  case '\"':
  case '#':
  case '(':
  case ')':
  case ',':
  case ';':
  case '=':
  case '{':
  case '}':
    *(undefined1 *)(piVar6 + 4) = 1;
    if (*(char *)((int)piVar6 + 0xf) == '\n') {
      piVar6[2] = piVar6[2] + -1;
    }
  }
  *(undefined1 *)(iVar4 + 0x10 + (int)in_ECX) = 0;
  if ((9 < (int)(char)*piVar7 - 0x30U) && ((char)*piVar7 != '-')) {
    if ((DAT_00f0ec08 != 0) && (piVar6 = (int *)FUN_009e6c10(piVar7), piVar6 != (int *)0x0)) {
      iVar4 = *piVar6;
      goto LAB_00990c0f;
    }
    cVar3 = (char)*piVar7;
    pcVar1 = (char *)((int)in_ECX + 0x11);
    while (cVar3 != '\0') {
      if (((9 < (int)cVar3 - 0x30U) && (cVar3 != '.')) && (cVar3 != '-')) {
        iVar4 = 0xf;
        goto LAB_00990c0f;
      }
      cVar3 = *pcVar1;
      pcVar1 = pcVar1 + 1;
    }
  }
  iVar4 = 0xc;
LAB_00990c0f:
  in_ECX[3] = iVar4;
  if ((cVar2 != -1) && (cVar2 != 0xffff)) {
    return 1;
  }
  return 0;
}

