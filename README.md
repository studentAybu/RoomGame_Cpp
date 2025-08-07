# Mario Money

This project is a simple platform game inspired by classic Mario games, developed using the SDL library in the C++ programming language. Its primary goal is to provide the basic gameplay mechanics and controls for a Mario character who can overcome obstacles, avoid enemies, and collect coins.

## Features

-   **Mario Character Controls:** Includes basic movements for Mario, such as walking, jumping, and idling.
-   **Collectable Coins:** Coins are present throughout the game, which the player must collect to increase their score and prevent health depletion.
-   **Goomba Enemies:** The game features moving enemies (Goombas) that Mario must avoid to stay alive.
-   **Health System:** Mario has a health bar that decreases upon contact with enemies or when missing coins. The game ends when Mario's health reaches zero.
-   **High Score Tracking:** The player's highest score achieved during gameplay is recorded.
-   **Power-up (Mushroom):** Mushroom objects are included that can increase Mario's health and grant additional points.
-   **Basic Visual and Sound Effects:** The game incorporates fundamental graphics and sound effects (for collecting coins, jumping, and power-ups) to enhance the gameplay experience.
-   **Game Over and Restart:** Upon depletion of health, a "GAME OVER" screen is displayed, offering the player the option to restart the game.

## Setup


**For macOS (using Homebrew package manager):**
   
    ```bash
    brew install sdl2 sdl2_image sdl2_mixer sdl2_ttf
    ```

### Controls

Use the following controls for a fluid gaming experience:

-   **Left Arrow Key:** Moves the Mario character to the left across the screen.
-   **Right Arrow Key:** Moves the Mario character to the right across the screen.
-   **Spacebar:** Makes Mario jump. The height and duration of the jump are determined by the in-game physics engine.
-   **Enter Key:** Resets the game and starts a new one when the "GAME OVER" screen is displayed.
-   **ESC Key:** Allows you to safely exit the game at any time.
