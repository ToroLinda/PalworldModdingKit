#include "PalOptionSubsystem.h"

UPalOptionSubsystem::UPalOptionSubsystem() {
    this->BaseFov = 75.00f;
    this->Namespace = TEXT("production");
    this->OptionWorldPresetTable = NULL;
    this->OptionWorldModePresetTable = NULL;
    this->OptionGraphicsPresetTable = NULL;
    this->PalPlayerCharacterClass = NULL;
}

void UPalOptionSubsystem::SetupForSteamDeck() {
}

void UPalOptionSubsystem::SetUISettings(const FPalOptionUISettings& InUISettings) {
}

void UPalOptionSubsystem::SetPadSettings(const FPalOptionPadSettings& InPadSettings) {
}

void UPalOptionSubsystem::SetOptionWorldSettings(const FPalOptionWorldSettings& InOptionWorldSettings) {
}

void UPalOptionSubsystem::SetOnlineUserSettings(const FPalOptionOnlineUserSettings& InOnlineUserSettings) {
}

void UPalOptionSubsystem::SetKeyConfigSettings(const FPalKeyConfigSettings& InKeyConfigSettings) {
}

void UPalOptionSubsystem::SetKeyboardSettings(const FPalOptionKeyboardSettings& InKeyboardSettings) {
}

void UPalOptionSubsystem::SetGraphicsSettings(const FPalOptionGraphicsSettings& InGraphicsSettings) {
}

void UPalOptionSubsystem::SetCommonSettings(const FPalOptionCommonSettings& InCommonSettings) {
}

void UPalOptionSubsystem::SetAudioSettings(const FPalOptionAudioSettings& InAudioSettings) {
}

void UPalOptionSubsystem::SaveLocalSettings() {
}

void UPalOptionSubsystem::RefreshBanList() {
}

void UPalOptionSubsystem::OnCompletedGetBanlist(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

bool UPalOptionSubsystem::IsCrossPlayAllowConnectPlatform() const {
    return false;
}

FPalOptionUISettings UPalOptionSubsystem::GetUISettings() const {
    return FPalOptionUISettings{};
}

void UPalOptionSubsystem::GetSupportScreenSizes(TArray<FIntPoint>& SupportResolutions, TEnumAsByte<EWindowMode::Type> WindowMode) {
}

FPalOptionPadSettings UPalOptionSubsystem::GetPadSettings() const {
    return FPalOptionPadSettings{};
}

FPalOptionWorldStaticSettings UPalOptionSubsystem::GetOptionWorldStaticSettings() const {
    return FPalOptionWorldStaticSettings{};
}

FPalOptionWorldSettings UPalOptionSubsystem::GetOptionWorldSettings() const {
    return FPalOptionWorldSettings{};
}

FPalOptionLocalStaticSettings UPalOptionSubsystem::GetOptionLocalStaticSettings() const {
    return FPalOptionLocalStaticSettings{};
}

FPalOptionOnlineUserSettings UPalOptionSubsystem::GetOnlineUserSettings() const {
    return FPalOptionOnlineUserSettings{};
}

FPalKeyConfigSettings UPalOptionSubsystem::GetKeyConfigSettings() const {
    return FPalKeyConfigSettings{};
}

FPalOptionKeyboardSettings UPalOptionSubsystem::GetKeyboardSettings() const {
    return FPalOptionKeyboardSettings{};
}

FPalOptionGraphicsSettings UPalOptionSubsystem::GetGraphicsSettings() const {
    return FPalOptionGraphicsSettings{};
}

FIntPoint UPalOptionSubsystem::GetGameResolution() {
    return FIntPoint{};
}

FPalOptionCommonSettings UPalOptionSubsystem::GetCommonSettings() const {
    return FPalOptionCommonSettings{};
}

FPalOptionAudioSettings UPalOptionSubsystem::GetAudioSettings() const {
    return FPalOptionAudioSettings{};
}

void UPalOptionSubsystem::ApplyWorldSettings() {
}

void UPalOptionSubsystem::ApplyWorldPreset(FPalOptionWorldSettings& OutSettings, EPalOptionWorldDifficulty Difficulty) {
}

void UPalOptionSubsystem::ApplyWorldModePreset(FPalOptionWorldSettings& OutSettings, bool bIsPvP) {
}

void UPalOptionSubsystem::ApplyGraphicsPresetByBenchMark(FPalOptionGraphicsSettings& OutSettings) {
}

void UPalOptionSubsystem::ApplyGraphicsPreset(FPalOptionGraphicsSettings& OutSettings, EPalOptionGraphicsLevel GraphicsLevel) {
}


