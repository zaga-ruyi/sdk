﻿using Newtonsoft.Json;
using System;

namespace Ruyi.SDK.Online
{
    /// <summary>
    /// Get Game Manifest information for patches.
    /// </summary>
    public class RuyiNetPatchService : RuyiNetService
    {

        internal RuyiNetPatchService(RuyiNetClient client)
            : base(client)
        { }

        /// <summary>
        /// Returns a manifest for the specified game.
        /// </summary>
        /// <param name="clientIndex">The index of the client making the call.</param>
        /// <param name="gameId">The index of the client making the call.</param>
        /// <param name="callback">Callback to call when the operation is complete.</param>
        public void EndTelemetrySession(int clientIndex, string gameId, RuyiNetTask<RuyiNetGameManifest>.CallbackType callback)
        {
            EnqueueTask(() =>
            {
                try
                {
                    var data = mClient.BCService.Patch_GetGameManifest(gameId, clientIndex);
                    return data;
                }
                catch (Exception e)
                {
#if DEBUG
                    var response = new RuyiNetResponse()
                    {
                        status = 999,
                        message = e.ToString()
                    };

                    return JsonConvert.SerializeObject(response);
#else
                        throw;
#endif
                }
            }, (RuyiNetGetGameManifestResponse response) =>
            {
                callback(response);
            });
        }
    }
}
