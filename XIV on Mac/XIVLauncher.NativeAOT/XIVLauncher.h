#include <stdbool.h>

void initXL(const char* appName, const char *storagePath);

const char *generateAcceptLanguage(int seed);

void loadConfig(const char *acceptLanguage, const char *gamePath, const char *gameConfigPath, unsigned char clientLanguage, bool isDx11, bool isEncryptArgs, bool isFt, const char *patchPath, unsigned char patchAcquisitionMethod, long patchSpeedLimit, bool dalamudEnabled, unsigned char dalamudLoadMethod, int dalamudLoadDelay);

void fakeLogin(void);

const char *tryLoginToGame(const char *username, const char *password, const char *otp, bool isSteam);

const char *startGame(const char *loginResult);

int getExitCode(int pid);

const char *getPatcherUserAgent();

const char *getBootPatches(void);

const char *installPatch(const char *patch, const char *repo);